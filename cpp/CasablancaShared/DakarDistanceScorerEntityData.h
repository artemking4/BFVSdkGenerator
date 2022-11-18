// Object: DakarDistanceScorerEntityData
// ClassId: 2586
// RuntimeId: 44268
// TypeInfo: 0x0000000144D4FF50
#include "../CasablancaShared/DakarScorerData.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"
#include "../Core/FloatCurve.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class DakarDistanceScorerEntityData : public CasablancaShared::DakarScorerData {
        Float32 Radius; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 Origin; // 0x30
        Float32 OutsideRangeScore; // 0x40
        char pad_0x44[0x4];
        Core::FloatCurve DistanceScoreCurve; // 0x48
    }; // 0x50
    static_assert(sizeof(DakarDistanceScorerEntityData) == 0x50);
}
#pragma pack(pop)