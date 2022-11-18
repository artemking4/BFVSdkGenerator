// Object: SplineMoverEntityData
// ClassId: 3497
// RuntimeId: 32938
// TypeInfo: 0x0000000144DBE8B0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../DiceCommonsShared/EndReachedBehavior.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class SplineMoverEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 InitialRotationX; // 0x24
        Float32 InitialRotationY; // 0x28
        Float32 InitialRotationZ; // 0x2C
        DiceCommonsShared::EndReachedBehavior EndReachedBehavior; // 0x30
        Float32 Speed; // 0x34
        Float32 InitialPosition; // 0x38
        Float32 CurrentPosition; // 0x3C
        Boolean PickSplineRandomly; // 0x40
        Boolean RotateObjectsWithSplineDirection; // 0x41
        Boolean RotateObjectsWithSplineNormal; // 0x42
        Boolean AutoStart; // 0x43
        char pad_0x44[0x4];
    }; // 0x48
    static_assert(sizeof(SplineMoverEntityData) == 0x48);
}
#pragma pack(pop)