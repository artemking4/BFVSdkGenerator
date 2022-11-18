// Object: ServerPathLinkEntity
// ClassId: 8006
// RuntimeId: 8868
// TypeInfo: 0x0000000144BF0840
#include "../BattleAI/PathLinkEntity.h"

namespace BattleAI {
    class ServerPathLinkEntity : public BattleAI::PathLinkEntity {
        char pad_0x58[0x20];
    }; // 0x78
    static_assert(sizeof(ServerPathLinkEntity) == 0x78);
}