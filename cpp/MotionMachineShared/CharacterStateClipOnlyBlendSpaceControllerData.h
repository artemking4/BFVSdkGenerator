// Object: CharacterStateClipOnlyBlendSpaceControllerData
// ClassId: 1335
// RuntimeId: 932
// TypeInfo: 0x0000000144EF4B20
#include "../MotionMachineShared/CharacterStateBaseControllerData.h"
#include "../MotionMachineShared/VoronoiDiagram.h"
#include "../MotionMachineShared/BlendSpaceClipMode.h"
#include "../MotionMachineShared/FloatChannelData.h"
#include "../Core/Vec2.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStateClipOnlyBlendSpaceControllerData : public MotionMachineShared::CharacterStateBaseControllerData {
        MotionMachineShared::VoronoiDiagram VoronoiDiagram; // 0x38
        MotionMachineShared::BlendSpaceClipMode ClipMode; // 0x80
        char pad_0x84[0x4];
        Array<MotionMachineShared::FloatChannelData> Channels; // 0x88
        Array<Core::Vec2> MaxDiff; // 0x90
    }; // 0x98
    static_assert(sizeof(CharacterStateClipOnlyBlendSpaceControllerData) == 0x98);
}
#pragma pack(pop)