// Object: ClipAssetKeyframe
// ClassId: 5180
// RuntimeId: 13095
// TypeInfo: 0x0000000144E30B10
#include "../Timeline/TimelineKeyframeData.h"
#include "../Global/Float32.h"
#include "../Animation/ClipAsset.h"

#pragma pack(push, 8)
namespace GameClient {
    class ClipAssetKeyframe : public Timeline::TimelineKeyframeData {
        Float32 Time; // 0x18
        Float32 Length; // 0x1C
        Animation::ClipAsset Clip; // 0x20
        Float32 ClipRawLength; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(ClipAssetKeyframe) == 0x30);
}
#pragma pack(pop)