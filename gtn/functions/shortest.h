#pragma once

#include "gtn/graph.h"

namespace gtn {
namespace detail {

Graph shortestDistance(const Graph& graph, bool tropical = false);
Graph shortestPath(const Graph& graph);

} // namespace detail
} // namespace gtn