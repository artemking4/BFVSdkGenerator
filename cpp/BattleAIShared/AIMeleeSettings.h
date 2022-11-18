// Object: AIMeleeSettings
// ClassId: 78
// RuntimeId: 3334
// TypeInfo: 0x0000000144C10D80
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"
#include "../BattleAIShared/ValidAgainst.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AIMeleeSettings : public Core::DataContainer {
        Float32 LastMeleeTimer; // 0x18
        Float32 PlayerHealthTakedownThreshold; // 0x1C
        Float32 MaxPlayerTakedownAngleDeg; // 0x20
        Float32 MinimumInterval; // 0x24
        Float32 MaximumInterval; // 0x28
        BattleAIShared::ValidAgainst ValidAgainst; // 0x2C
    }; // 0x30
    static_assert(sizeof(AIMeleeSettings) == 0x30);
}
#pragma pack(pop)