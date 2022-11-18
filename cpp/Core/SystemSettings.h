// Object: SystemSettings
// ClassId: 4956
// RuntimeId: 6040
// TypeInfo: 0x0000000144BE8AF0
#include "../Core/DataContainer.h"
#include "../Core/GamePlatform.h"

#pragma pack(push, 8)
namespace Core {
    class SystemSettings : public Core::DataContainer {
        Core::GamePlatform Platform; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(SystemSettings) == 0x20);
}
#pragma pack(pop)