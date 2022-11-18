// Object: LogitechLEDSettings
// ClassId: 4996
// RuntimeId: 51051
// TypeInfo: 0x0000000144DA6DA0
#include "../Core/SystemSettings.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceCommons {
    class LogitechLEDSettings : public Core::SystemSettings {
        Boolean Enable; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(LogitechLEDSettings) == 0x28);
}
#pragma pack(pop)