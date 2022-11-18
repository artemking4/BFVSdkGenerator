// Object: BFOnlineLevelDescriptionComponent
// ClassId: 4208
// RuntimeId: 22396
// TypeInfo: 0x0000000144D2A3A0
#include "../GameShared/LevelDescriptionComponent.h"
#include "../Global/Boolean.h"
#include "../GameShared/PersistenceGameType.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFOnlineLevelDescriptionComponent : public GameShared::LevelDescriptionComponent {
        GameShared::PersistenceGameType ForcedPersistenceGameType; // 0x18
        char pad_0x1C[0x4];
        CString GameMode; // 0x20
        Boolean ForceLocalServerBackend; // 0x28
        Boolean ForcePersistenceGameType; // 0x29
        char pad_0x2A[0x6];
    }; // 0x30
    static_assert(sizeof(BFOnlineLevelDescriptionComponent) == 0x30);
}
#pragma pack(pop)