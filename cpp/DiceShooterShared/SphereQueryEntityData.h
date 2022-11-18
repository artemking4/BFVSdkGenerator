// Object: SphereQueryEntityData
// ClassId: 3496
// RuntimeId: 51111
// TypeInfo: 0x0000000144DF1450
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../DiceShooterShared/QueryEntityFilter.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class SphereQueryEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 Position; // 0x30
        Float32 Radius; // 0x40
        Float32 Latency; // 0x44
        DiceShooterShared::QueryEntityFilter FilteredTypes; // 0x48
        DiceShooterShared::QueryEntityFilter DefaultFilteredTypes; // 0x4C
        Boolean AlwaysEnabled; // 0x50
        char pad_0x51[0xF];
    }; // 0x60
    static_assert(sizeof(SphereQueryEntityData) == 0x60);
}
#pragma pack(pop)