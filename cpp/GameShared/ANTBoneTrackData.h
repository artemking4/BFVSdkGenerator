// Object: ANTBoneTrackData
// ClassId: 4047
// RuntimeId: 42948
// TypeInfo: 0x0000000144E9E350
#include "../Timeline/LayeredTransformTrackData.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameShared {
    class ANTBoneTrackData : public Timeline::LayeredTransformTrackData {
        CString BoneName; // 0x50
        Boolean ApplyLayeredTransform; // 0x58
        Boolean RelativeToParent; // 0x59
        Boolean Apply90DegreeCorrection; // 0x5A
        char pad_0x5B[0x5];
    }; // 0x60
    static_assert(sizeof(ANTBoneTrackData) == 0x60);
}
#pragma pack(pop)