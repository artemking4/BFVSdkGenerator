// Object: PhantomEntityData
// ClassId: 2945
// RuntimeId: 46159
// TypeInfo: 0x0000000144DE4AF0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Core/Vec3.h"
#include "../Ant/AntRef.h"
#include "../Core/LinearTransform.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class PhantomEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 PositionOffset; // 0x30
        Core::Vec3 BoxSize; // 0x40
        Core::LinearTransform PhantomTransform; // 0x50
        Ant::AntRef AsyncQueryPointerAsset; // 0x90
        Boolean EnablePhantom; // 0xA4
        Boolean IncludeVehicles; // 0xA5
        Boolean IncludeCharacters; // 0xA6
        Boolean IncludeActors; // 0xA7
        char pad_0xA8[0x8];
    }; // 0xB0
    static_assert(sizeof(PhantomEntityData) == 0xB0);
}
#pragma pack(pop)