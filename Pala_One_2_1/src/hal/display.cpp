#include "src/hal/display.h"
#include "src/ui/screen_settings.h"

U8G2_FOR_ADAFRUIT_GFX u8g2;
HeltecGFXAdapter gfx(display);

// ============================================================================
//  Drawing primitives
// ============================================================================
void beginPageCanvas(bool clearMem) {
  if (clearMem) display.clearMemory();
  display.landscape();
  u8g2.setFontMode(1);
  if (bgCol() == 1) {
    gfx.fillScreen(bgCol());
  }
  u8g2.setForegroundColor(fgCol());
  u8g2.setBackgroundColor(bgCol());
  gfx.drawPixel(0, 121, fgCol());
}
