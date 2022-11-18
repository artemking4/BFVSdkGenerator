// Object: BattleAISettings
// ClassId: 4970
// RuntimeId: 47991
// TypeInfo: 0x0000000144C06DE0
#include "../Core/SystemSettings.h"
#include "../Global/Boolean.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class BattleAISettings : public Core::SystemSettings {
        Uint32 NavPowerFixedHeapSizeKb; // 0x20
        Boolean UseNavPowerFixedHeap; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(BattleAISettings) == 0x28);
}
#pragma pack(pop)