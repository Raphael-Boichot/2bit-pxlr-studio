#include <gb/gb.h>
#include <gbdk/platform.h>

#include "globals.h"
#include "defines.h"
#include "utils.h"
#include "joypad.h"
#include "saveImage.h"
#include "tiles.h"
#include "maps.h"
#include "menus/shootingManualMenuItems.h"
#include "overlays/overlays.h"
#include "banks.h"
#include "bankedData.h"
#include "mainMenu.h"
#include "camera.h"
#include "dialog.h"

uint8_t manualMenuPos = 0;

void renderManualMenu() {
  clonk();
  fill_bkg_rect(0, 0, 20, 2, BLNK);
  fill_bkg_rect(0, 16, 20, 2, BLNK);

  uint8_t currentPage = menuItems[manualMenuPos]->page;
  uint8_t spriteX = (menuItems[manualMenuPos]->x * 8) + 8;
  move_sprite(SPRITE_MENU_INDICATOR, spriteX, 23);

  for (uint8_t i = 0; i < NUM_MENU_ELEMENTS; i += 1) {

    if (menuItems[i]->page == currentPage) {

      uint8_t value = menuItems[i]->value;
      set_bkg_based_tiles(menuItems[i]->x, 0, MENU_TEXT_LENGTH, 1, menuItems[i]->title, OFFSET_FONT - 32);
      set_bkg_based_tiles(menuItems[i]->x, 1, MENU_TEXT_LENGTH, 1, menuItems[i]->options[value].title, OFFSET_FONT - 32);

    }
  }

  set_bkg_based_tiles(0, 16, 9, 2, menuItems[manualMenuPos]->description, OFFSET_FONT - 32);

  set_bkg_based_tiles(12, 16, 6, 2, "   /30Images", OFFSET_FONT - 32);
  writeNumber(12, 16, 2, numVisibleImages);
}

void initManualMode() {
  clearBkg();
  set_bkg_tiles_banked(2, 2, 16, 14, map_normal, 1);
  sortImages();
  showOverlay();
  renderManualMenu();
}

void storeSettings() {
  SWITCH_RAM(1);
  for (uint8_t i = 0; i < NUM_MENU_ELEMENTS; i += 1) {
    image_first_unused[menuItems[i]->storeOffset] = menuItems[i]->value;
  }
}

void restoreDefaults() {
  for (uint8_t i = 0; i < NUM_MENU_ELEMENTS; i += 1) {
    menuItems[i]->value = menuItems[i]->defaultValue;
  }

  storeSettings();
}

uint8_t loadSettingsFromRAM() {
  SWITCH_RAM(1);

  uint8_t i = 0;
  uint8_t noAA = 0;

  // check if any of the storage cells already has a valid value
  // the initial value which is never changes on an original cart is 0xAA
  for (i = 0; i < NUM_MENU_ELEMENTS; i += 1) {
    if (image_first_unused[menuItems[i]->storeOffset] != 0xAA) {
      noAA = 1;
    }
  }

  // load initial values from storage cells
  if (noAA) {

    for (i = 0; i < NUM_MENU_ELEMENTS; i += 1) {
      menuItems[i]->value = image_first_unused[menuItems[i]->storeOffset];
    }

    return 0;
  }

  // 1 forces a reset to defaults
  return 1;
}

void menuAction() {
  if (menuItems[manualMenuPos]->action == MENU_ACTION_DITHER) {
    setDitherMatrix();
  }
}

void manualShootMenu() {
  if (jp == J_RIGHT) {
    manualMenuPos = (manualMenuPos + 1) % NUM_MENU_ELEMENTS;
    renderManualMenu();
    joypadConsumed();
  } else if (jp == J_LEFT) {
    manualMenuPos = (manualMenuPos + NUM_MENU_ELEMENTS - 1) % NUM_MENU_ELEMENTS;
    renderManualMenu();
    joypadConsumed();
  } else if (jp == J_UP) {

    menuItems[manualMenuPos]->value = (menuItems[manualMenuPos]->value + 1) % menuItems[manualMenuPos]->numOptions;

    menuAction();
    storeSettings();
    renderManualMenu();
    joypadConsumed();
  } else if (jp == J_DOWN) {

    menuItems[manualMenuPos]->value = (menuItems[manualMenuPos]->value + menuItems[manualMenuPos]->numOptions - 1) % menuItems[manualMenuPos]->numOptions;

    menuAction();
    storeSettings();
    renderManualMenu();
    joypadConsumed();
  } else if (jp == J_B) {
    menuSelectMode(MAIN_LOOP_MENU);
    joypadConsumed();
  } else if (jp == J_SELECT) {
    if (dialog("Reset settings? ", 1)) {
      restoreDefaults();
      setDitherMatrix();
      renderManualMenu();
    }

    joypadConsumed();
  } else if (jp == J_A) {
    saveImageDialog();
    joypadConsumed();
  } else if (jp == J_START) {
    nextOverlay();
    clonk();
    showOverlay();
    joypadConsumed();
  }
}
