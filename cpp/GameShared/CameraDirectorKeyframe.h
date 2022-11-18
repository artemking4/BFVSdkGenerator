// Object: CameraDirectorKeyframe
// ClassId: 1283
// RuntimeId: 9443
// TypeInfo: 0x0000000144E9D850
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"
#include "../GameShared/CameraTrackBaseData.h"
#include "../Global/Boolean.h"
#include "../GameShared/CameraDirectorTrackBaseData.h"

#pragma pack(push, 8)
namespace GameShared {
    class CameraDirectorKeyframe : public Core::DataContainer {
        Float32 Time; // 0x18
        char pad_0x1C[0x4];
        GameShared::CameraTrackBaseData CameraTrack; // 0x20
        GameShared::CameraDirectorTrackBaseData ParentDirectorTrack; // 0x28
        Boolean JumpCut; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(CameraDirectorKeyframe) == 0x38);
}
#pragma pack(pop)