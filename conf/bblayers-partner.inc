# This is a FoundriesFactory Partner bblayers include file
# Meta-partner-amd-xilinx is a FoundriesFactory partner layer
# Do not remove unless you really know what you are doing.
BASELAYERS += "${OEROOT}/layers/meta-partner-amd-xilinx"

BSPLAYERS += " \
  ${OEROOT}/layers/meta-xilinx/meta-xilinx-core \
  ${OEROOT}/layers/meta-xilinx/meta-xilinx-bsp \
  ${OEROOT}/layers/meta-xilinx/meta-xilinx-standalone \
  ${OEROOT}/layers/meta-xilinx-tools \
"
