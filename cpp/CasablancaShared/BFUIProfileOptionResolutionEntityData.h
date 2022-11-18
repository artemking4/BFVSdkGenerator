// Object: BFUIProfileOptionResolutionEntityData
// ClassId: 2361
// RuntimeId: 8283
// TypeInfo: 0x0000000144D87FA0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIProfileOptionResolutionEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Int32 MinFullscreenResolution; // 0x24
    }; // 0x28
    static_assert(sizeof(BFUIProfileOptionResolutionEntityData) == 0x28);
}
#pragma pack(pop)