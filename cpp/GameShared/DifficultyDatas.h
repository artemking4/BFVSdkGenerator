// Object: DifficultyDatas
// ClassId: 472
// RuntimeId: 17971
// TypeInfo: 0x0000000144E81140
#include "../Core/Asset.h"
#include "../GameShared/DifficultyData.h"

#pragma pack(push, 8)
namespace GameShared {
    class DifficultyDatas : public Core::Asset {
        Array<GameShared::DifficultyData> Difficulties; // 0x20
    }; // 0x28
    static_assert(sizeof(DifficultyDatas) == 0x28);
}
#pragma pack(pop)