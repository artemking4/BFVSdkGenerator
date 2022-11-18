// Object: ANTControllerLayerData
// ClassId: 3990
// RuntimeId: 53526
// TypeInfo: 0x0000000144E9E1D0
#include "../GameShared/ANTLayerData.h"
#include "../Ant/AntRef.h"
#include "../GameShared/ANTControllerKeyframe.h"

#pragma pack(push, 8)
namespace GameShared {
    class ANTControllerLayerData : public GameShared::ANTLayerData {
        Ant::AntRef BlendMaskList; // 0x38
        char pad_0x4C[0x4];
        Array<GameShared::ANTControllerKeyframe> Keyframes; // 0x50
    }; // 0x58
    static_assert(sizeof(ANTControllerLayerData) == 0x58);
}
#pragma pack(pop)