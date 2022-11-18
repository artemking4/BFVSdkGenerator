// Object: TowCouplerComponentData
// ClassId: 1862
// RuntimeId: 60021
// TypeInfo: 0x0000000144F70B00
#include "../Entity/GameComponentData.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace VehicleShared {
    class TowCouplerComponentData : public Entity::GameComponentData {
        Core::Vec3 ConnectionVolumeOffset; // 0x80
        Core::Vec3 VisualConnectionPointIn; // 0x90
        Float32 ConnectionStrength; // 0xA0
        Float32 OwnVelocityContribution; // 0xA4
        Float32 ConnectionVolumeRadius; // 0xA8
        Float32 ConnectionVolumeHeight; // 0xAC
        Core::Realm Realm; // 0xB0
        Boolean Enabled; // 0xB4
        char pad_0xB5[0xB];
    }; // 0xC0
    static_assert(sizeof(TowCouplerComponentData) == 0xC0);
}
#pragma pack(pop)