// Object: GameAIEntryData
// ClassId: 506
// RuntimeId: 30785
// TypeInfo: 0x0000000144E95730
#include "../Core/Asset.h"
#include "../GameShared/GameAIEntryData.h"

#pragma pack(push, 8)
namespace GameShared {
    class GameAIEntryData : public Core::Asset {
        GameShared::GameAIEntryData Ai2Data; // 0x20
    }; // 0x28
    static_assert(sizeof(GameAIEntryData) == 0x28);
}
#pragma pack(pop)