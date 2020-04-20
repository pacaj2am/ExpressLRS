#include "HwSpi.h"
#include "targets.h"

HwSpi::HwSpi() : SPIClass()
{
    SS = GPIO_PIN_NSS;
    MOSI = GPIO_PIN_MOSI;
    MISO = GPIO_PIN_MISO;
    SCK = GPIO_PIN_SCK;
}

void HwSpi::platform_init(void)
{
    // sck, miso, mosi, ss (ss can be any GPIO)
    SPIClass::begin(SCK, MISO, MOSI, -1);
}

void HwSpi::write(uint8_t data)
{
    SPIClass::write(data);
}

void HwSpi::write(uint8_t *data, uint8_t numBytes)
{
    SPIClass::writeBytes((uint8_t *)data, numBytes);
}

HwSpi RadioSpi;