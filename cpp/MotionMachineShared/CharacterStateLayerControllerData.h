// Object: CharacterStateLayerControllerData
// ClassId: 1351
// RuntimeId: 8857
// TypeInfo: 0x0000000144EF41A0
#include "../MotionMachineShared/CharacterStateBaseControllerData.h"
#include "../MotionMachineShared/LayerElementInfo.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStateLayerControllerData : public MotionMachineShared::CharacterStateBaseControllerData {
        Array<MotionMachineShared::LayerElementInfo> LayerInfos; // 0x38
    }; // 0x40
    static_assert(sizeof(CharacterStateLayerControllerData) == 0x40);
}
#pragma pack(pop)