// Object: CharacterStateBaseControllerData
// ClassId: 1318
// RuntimeId: 16938
// TypeInfo: 0x0000000144EF4C20
#include "../Core/DataContainer.h"
#include "../Global/Int32.h"
#include "../MotionMachineShared/CharacterStateBaseControllerData.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStateBaseControllerData : public Core::DataContainer {
        Int32 AssetIndex; // 0x18
        char pad_0x1C[0x4];
        Array<MotionMachineShared::CharacterStateBaseControllerData> Subjects; // 0x20
        CString Name; // 0x28
        Array<MotionMachineShared::CharacterStateBaseControllerData> IndexedSubjects; // 0x30
    }; // 0x38
    static_assert(sizeof(CharacterStateBaseControllerData) == 0x38);
}
#pragma pack(pop)