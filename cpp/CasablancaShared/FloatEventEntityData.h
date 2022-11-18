// Object: FloatEventEntityData
// ClassId: 2752
// RuntimeId: 18413
// TypeInfo: 0x0000000144D5B260
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class FloatEventEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 Value; // 0x24
    }; // 0x28
    static_assert(sizeof(FloatEventEntityData) == 0x28);
}
#pragma pack(pop)