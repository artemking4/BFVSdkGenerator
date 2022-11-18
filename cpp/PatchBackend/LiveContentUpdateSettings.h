// Object: LiveContentUpdateSettings
// ClassId: 4995
// RuntimeId: 8695
// TypeInfo: 0x0000000144F080B0
#include "../Core/SystemSettings.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace PatchBackend {
    class LiveContentUpdateSettings : public Core::SystemSettings {
        Int32 TimeoutInitial; // 0x20
        Int32 TimeoutRecheck; // 0x24
        Boolean AutoStart; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(LiveContentUpdateSettings) == 0x30);
}
#pragma pack(pop)