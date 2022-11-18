// Object: BFUIGetSpecTreeTierInfoEntityData
// ClassId: 2251
// RuntimeId: 64625
// TypeInfo: 0x0000000144D508D0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/BFUISpecTreeInstanceObject.h"
#include "../CasablancaShared/UISpecializationTier.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetSpecTreeTierInfoEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUISpecTreeInstanceObject SpecTree; // 0x28
        CasablancaShared::UISpecializationTier Tier; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(BFUIGetSpecTreeTierInfoEntityData) == 0x38);
}
#pragma pack(pop)