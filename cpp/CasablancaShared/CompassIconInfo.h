// Object: CompassIconInfo
// ClassId: 1419
// RuntimeId: 29181
// TypeInfo: 0x0000000144D2FB20
#include "../Core/DataContainer.h"
#include "../CasablancaShared/CompassIconType.h"
#include "../Core/Vec3.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUIPlayerObject.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class CompassIconInfo : public Core::DataContainer {
        CasablancaShared::CompassIconType IconType; // 0x18
        Int32 RoundedDistance; // 0x1C
        Core::Vec3 WorldPosition; // 0x20
        Float32 Distance; // 0x30
        Float32 AngleRelativeToWorld; // 0x34
        CasablancaShared::BFUIPlayerObject Player; // 0x38
        Boolean IsEnabled; // 0x40
        Boolean IsVerticalToPlayer; // 0x41
        Boolean IsInCompassFov; // 0x42
        Boolean IsInInfoZoneFov; // 0x43
        Boolean IsTopDistanceFilterPriority; // 0x44
        char pad_0x45[0xB];
    }; // 0x50
    static_assert(sizeof(CompassIconInfo) == 0x50);
}
#pragma pack(pop)