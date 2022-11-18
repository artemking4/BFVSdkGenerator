// Object: FaceposerComponentData
// ClassId: 1779
// RuntimeId: 3552
// TypeInfo: 0x0000000144F45C30
#include "../Entity/GameComponentData.h"
#include "../Ant/AntRef.h"
#include "../Global/Float32.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace SoldierShared {
    class FaceposerComponentData : public Entity::GameComponentData {
        Ant::AntRef FacePoserEnabled; // 0x80
        Float32 LodDistance; // 0x94
        Ant::AntRef FacePoseLibraryReference; // 0x98
        char pad_0xAC[0x4];
        Array<Ant::AntRef> FacePoseLibrary; // 0xB0
        CString FacePoserDofSetName; // 0xB8
        Array<CString> ShaderExposedValues; // 0xC0
        Int32 FacePoseLibraryIndex; // 0xC8
        char pad_0xCC[0x4];
    }; // 0xD0
    static_assert(sizeof(FaceposerComponentData) == 0xD0);
}
#pragma pack(pop)