// Object: EnlightenEntityData
// ClassId: 2694
// RuntimeId: 20953
// TypeInfo: 0x0000000144EC2F40
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace WorldSim {
    class EnlightenEntityData : public Entity::EntityData {
        Int32 Priority; // 0x20
        Core::Realm Realm; // 0x24
        Boolean Enable; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(EnlightenEntityData) == 0x30);
}
#pragma pack(pop)