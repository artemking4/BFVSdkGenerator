// Object: MeshSlot
// ClassId: 4284
// RuntimeId: 62961
// TypeInfo: 0x0000000144DB6610
#include "../Core/DataContainer.h"
#include "../Global/Guid.h"
#include "../Global/CString.h"
#include "../DiceCommonsShared/SelectionMethod.h"
#include "../Global/Int32.h"
#include "../DiceCommonsShared/DefinitionMesh.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class MeshSlot : public Core::DataContainer {
        Guid Guid; // 0x18
        CString ObjectTag; // 0x28
        CString Name; // 0x30
        DiceCommonsShared::SelectionMethod SelectionMethod; // 0x38
        Int32 Default; // 0x3C
        Array<DiceCommonsShared::DefinitionMesh> Meshes; // 0x40
    }; // 0x48
    static_assert(sizeof(MeshSlot) == 0x48);
}
#pragma pack(pop)