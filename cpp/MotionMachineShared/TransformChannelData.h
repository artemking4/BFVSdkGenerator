// Object: TransformChannelData
// ClassId: 1309
// RuntimeId: 24838
// TypeInfo: 0x0000000144EFB530
#include "../MotionMachineShared/ChannelData.h"
#include "../MotionMachineShared/TransformChannelMirrorToGameStateMode.h"
#include "../Ant/AntRef.h"
#include "../MotionMachineShared/TransformNetworkQuantization.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"
#include "../MotionMachineShared/TransformChannelData.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace MotionMachineShared {
    class TransformChannelData : public MotionMachineShared::ChannelData {
        MotionMachineShared::TransformChannelMirrorToGameStateMode MirrorMode; // 0x38
        char pad_0x3C[0x4];
        Core::LinearTransform DefaultValue; // 0x40
        Ant::AntRef AntMatrix; // 0x80
        Ant::AntRef AntPosition; // 0x94
        MotionMachineShared::TransformNetworkQuantization NetworkQuantization; // 0xA8
        CString JointName; // 0xE8
        MotionMachineShared::TransformChannelData ParentChannel; // 0xF0
        Boolean IsDeltaChannel; // 0xF8
        Boolean AccumulateDelta; // 0xF9
        char pad_0xFA[0x6];
    }; // 0x100
    static_assert(sizeof(TransformChannelData) == 0x100);
}
#pragma pack(pop)