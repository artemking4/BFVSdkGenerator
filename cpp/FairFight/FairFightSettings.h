// Object: FairFightSettings
// ClassId: 4986
// RuntimeId: 37478
// TypeInfo: 0x0000000144EE81F0
#include "../Core/SystemSettings.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace FairFight {
    class FairFightSettings : public Core::SystemSettings {
        Boolean ProcessAI; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(FairFightSettings) == 0x28);
}
#pragma pack(pop)