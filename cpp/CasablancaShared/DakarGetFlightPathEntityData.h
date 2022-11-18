// Object: DakarGetFlightPathEntityData
// ClassId: 2574
// RuntimeId: 55319
// TypeInfo: 0x0000000144D50350
#include "../Entity/EntityData.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class DakarGetFlightPathEntityData : public Entity::EntityData {
        Float32 Radius; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 Centre; // 0x30
        Float32 RadiusMultiplier; // 0x40
        Float32 Height; // 0x44
        Float32 MinDistanceBetweenPoints; // 0x48
        Boolean ConstrainPointsToCircle; // 0x4C
        char pad_0x4D[0x3];
    }; // 0x50
    static_assert(sizeof(DakarGetFlightPathEntityData) == 0x50);
}
#pragma pack(pop)