// Object: ObjectCastEntityData
// ClassId: 2909
// RuntimeId: 37555
// TypeInfo: 0x0000000144D4B8F0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ObjectCastEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Core::DataContainer DataInput; // 0x28
        CString QualifiedTypeName; // 0x30
        Boolean VerifyType; // 0x38
        char pad_0x39[0x7];
    }; // 0x40
    static_assert(sizeof(ObjectCastEntityData) == 0x40);
}
#pragma pack(pop)