// Object: TowHitchComponentData
// ClassId: 1863
// RuntimeId: 26950
// TypeInfo: 0x0000000144F70B80
#include "../Entity/GameComponentData.h"
#include "../Core/Realm.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace VehicleShared {
    class TowHitchComponentData : public Entity::GameComponentData {
        Core::Vec3 ConnectingOffset; // 0x80
        Core::Vec3 VisualConnectionPointIn; // 0x90
        Core::Realm Realm; // 0xA0
        Int32 Action; // 0xA4
        Float32 ConnectionStrength; // 0xA8
        Float32 OwnVelocityContribution; // 0xAC
        Float32 InterpolationDuration; // 0xB0
        Boolean Enabled; // 0xB4
        char pad_0xB5[0xB];
    }; // 0xC0
    static_assert(sizeof(TowHitchComponentData) == 0xC0);
}
#pragma pack(pop)