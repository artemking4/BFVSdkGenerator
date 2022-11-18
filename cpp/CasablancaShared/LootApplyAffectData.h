// Object: LootApplyAffectData
// ClassId: 2868
// RuntimeId: 56870
// TypeInfo: 0x0000000144D02020
#include "../Entity/EntityData.h"
#include "../CasablancaShared/HealingAsset.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class LootApplyAffectData : public Entity::EntityData {
        Array<CasablancaShared::HealingAsset> HealAssets; // 0x20
    }; // 0x28
    static_assert(sizeof(LootApplyAffectData) == 0x28);
}
#pragma pack(pop)