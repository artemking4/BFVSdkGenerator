// Object: BFUIProfileOptionHslConverterEntityData
// ClassId: 2359
// RuntimeId: 5908
// TypeInfo: 0x0000000144D87CA0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIProfileOptionHslConverterEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 InColor; // 0x30
        Boolean ConvertFromHSL; // 0x40
        char pad_0x41[0xF];
    }; // 0x50
    static_assert(sizeof(BFUIProfileOptionHslConverterEntityData) == 0x50);
}
#pragma pack(pop)