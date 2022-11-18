// Object: SpecializationTreeEntityData
// ClassId: 3491
// RuntimeId: 24383
// TypeInfo: 0x0000000144D50B50
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/BFUISpecTreeInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SpecializationTreeEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUISpecTreeInstanceObject SpecTree; // 0x28
    }; // 0x30
    static_assert(sizeof(SpecializationTreeEntityData) == 0x30);
}
#pragma pack(pop)