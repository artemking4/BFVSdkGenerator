// Object: GameTweakBlindedBehavior
// ClassId: 521
// RuntimeId: 60362
// TypeInfo: 0x0000000144C19730
#include "../Core/Asset.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class GameTweakBlindedBehavior : public Core::Asset {
        Float32 BlindedTime; // 0x20
        Float32 BlindedRadius; // 0x24
    }; // 0x28
    static_assert(sizeof(GameTweakBlindedBehavior) == 0x28);
}
#pragma pack(pop)