// Object: RecordedInputData
// ClassId: 702
// RuntimeId: 49182
// TypeInfo: 0x0000000144E8F4E0
#include "../Core/Asset.h"
#include "../GameShared/InputRecorderTrackData.h"

#pragma pack(push, 8)
namespace GameShared {
    class RecordedInputData : public Core::Asset {
        Array<GameShared::InputRecorderTrackData> TrackData; // 0x20
    }; // 0x28
    static_assert(sizeof(RecordedInputData) == 0x28);
}
#pragma pack(pop)