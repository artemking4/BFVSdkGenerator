// Object: AggregatedDogTags
// ClassId: 142
// RuntimeId: 26499
// TypeInfo: 0x0000000144D012A0
#include "../Core/Asset.h"
#include "../DicePersistenceShared/StatCategoryData.h"
#include "../CasablancaShared/AdvancedDogTagData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class AggregatedDogTags : public Core::Asset {
        DicePersistenceShared::StatCategoryData MeleeKillWeapon; // 0x20
        Array<CasablancaShared::AdvancedDogTagData> RuntimeDogTags; // 0x28
    }; // 0x30
    static_assert(sizeof(AggregatedDogTags) == 0x30);
}
#pragma pack(pop)