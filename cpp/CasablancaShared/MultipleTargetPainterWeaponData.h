// Object: MultipleTargetPainterWeaponData
// ClassId: 5216
// RuntimeId: 2422
// TypeInfo: 0x0000000144D40750
#include "../CasablancaShared/BFWeaponData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../GameShared/SpottingType.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class MultipleTargetPainterWeaponData : public CasablancaShared::BFWeaponData {
        Float32 TimeObjectIsPainted; // 0x28
        GameShared::SpottingType SpottingBehavior; // 0x2C
        Float32 TimeObjectIsSpotted; // 0x30
        Float32 Range; // 0x34
        Float32 Angle; // 0x38
        Boolean UseLaserPainting; // 0x3C
        Boolean UseSpotting; // 0x3D
        char pad_0x3E[0x2];
    }; // 0x40
    static_assert(sizeof(MultipleTargetPainterWeaponData) == 0x40);
}
#pragma pack(pop)