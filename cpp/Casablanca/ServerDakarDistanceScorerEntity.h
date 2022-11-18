// Object: ServerDakarDistanceScorerEntity
// ClassId: 7492
// RuntimeId: 1833
// TypeInfo: 0x0000000144CDE4E0
#include "../Casablanca/ServerDakarScorer.h"

namespace Casablanca {
    class ServerDakarDistanceScorerEntity : public Casablanca::ServerDakarScorer {
        char pad_0x30[0x20];
    }; // 0x50
    static_assert(sizeof(ServerDakarDistanceScorerEntity) == 0x50);
}