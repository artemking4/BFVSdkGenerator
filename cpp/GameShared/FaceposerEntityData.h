// Object: FaceposerEntityData
// ClassId: 2734
// RuntimeId: 61793
// TypeInfo: 0x0000000144E6DB50
#include "../Entity/EntityData.h"
#include "../Ant/AntRef.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameShared {
    class FaceposerEntityData : public Entity::EntityData {
        Ant::AntRef FacePoserLibrary; // 0x20
        Boolean SetFacePoserLibraryOnSpawn; // 0x34
        char pad_0x35[0x3];
    }; // 0x38
    static_assert(sizeof(FaceposerEntityData) == 0x38);
}
#pragma pack(pop)