// Object: BFCheckpointLevelDescriptionComponent
// ClassId: 4207
// RuntimeId: 6856
// TypeInfo: 0x0000000144D2A620
#include "../GameShared/LevelDescriptionComponent.h"
#include "../CasablancaShared/BFCheckpointRuntimeDesc.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFCheckpointLevelDescriptionComponent : public GameShared::LevelDescriptionComponent {
        Array<CasablancaShared::BFCheckpointRuntimeDesc> Checkpoints; // 0x18
    }; // 0x20
    static_assert(sizeof(BFCheckpointLevelDescriptionComponent) == 0x20);
}
#pragma pack(pop)