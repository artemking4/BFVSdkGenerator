// Object: CameraDirectorTrackData
// ClassId: 3999
// RuntimeId: 35710
// TypeInfo: 0x0000000144E9D750
#include "../GameShared/CameraDirectorTrackBaseData.h"
#include "../GameShared/CameraDirectorKeyframe.h"

#pragma pack(push, 8)
namespace GameShared {
    class CameraDirectorTrackData : public GameShared::CameraDirectorTrackBaseData {
        Array<GameShared::CameraDirectorKeyframe> Keyframes; // 0x40
    }; // 0x48
    static_assert(sizeof(CameraDirectorTrackData) == 0x48);
}
#pragma pack(pop)