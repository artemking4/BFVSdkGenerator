// Object: DefinitionMesh
// ClassId: 1510
// RuntimeId: 11125
// TypeInfo: 0x0000000144DB6690
#include "../Core/DataContainer.h"
#include "../Global/Guid.h"
#include "../Global/CString.h"
#include "../Core/LinearTransform.h"
#include "../DiceCommonsShared/MeshRuntimeData.h"
#include "../Global/Uint32.h"
#include "../Ant/AntRef.h"
#include "../GameShared/UnlockAsset.h"
#include "../GameShared/WriteAntGameStateData.h"

#pragma pack(push, 16)
namespace DiceCommonsShared {
    class DefinitionMesh : public Core::DataContainer {
        Guid Guid; // 0x18
        CString ObjectTag; // 0x28
        Array<DiceCommonsShared::MeshRuntimeData> MeshData; // 0x30
        char pad_0x38[0x8];
        Core::LinearTransform AttachOffset; // 0x40
        Array<Uint32> RequiredTagNameHashes; // 0x80
        Array<Uint32> RequiredFalseTagNameHashes; // 0x88
        Ant::AntRef FacePoserLibrary; // 0x90
        char pad_0xA4[0x4];
        Array<GameShared::UnlockAsset> UnlockAssets; // 0xA8
        Array<GameShared::WriteAntGameStateData> AntGameStates; // 0xB0
        Array<Uint32> TriggeredTagNameHashes; // 0xB8
    }; // 0xC0
    static_assert(sizeof(DefinitionMesh) == 0xC0);
}
#pragma pack(pop)