// Object: DefaultANTLayerData
// ClassId: 3993
// RuntimeId: 61303
// TypeInfo: 0x0000000144E96AB0
#include "../GameShared/ANTLayerData.h"
#include "../Ant/AntRef.h"
#include "../GameShared/ANTClipKeyframeTrackData.h"
#include "../GameShared/ANTBlendKeyframeTrackData.h"

#pragma pack(push, 8)
namespace GameShared {
    class DefaultANTLayerData : public GameShared::ANTLayerData {
        Ant::AntRef BlendMaskList; // 0x38
        char pad_0x4C[0x4];
        GameShared::ANTClipKeyframeTrackData ClipTrack; // 0x50
        GameShared::ANTBlendKeyframeTrackData BlendTrack; // 0x58
    }; // 0x60
    static_assert(sizeof(DefaultANTLayerData) == 0x60);
}
#pragma pack(pop)