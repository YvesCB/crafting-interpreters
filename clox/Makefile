CC = gcc
CFLAGS = -std=c11 -Wall -MMD -g

ODIR = target
SRCDIR = src
PROJ = clox

SOURCES = $(wildcard $(SRCDIR)/*.c)
OBJECTS = $(SOURCES:$(SRCDIR)/%.c=$(ODIR)/%.o)
DEPS = $(OBJECTS:.o=.d)

$(ODIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(ODIR)
	$(CC) $(CFLAGS) -c $< -o $@ 

$(PROJ): $(OBJECTS)
	$(CC) $(CFLAGS) $^ -o $@

-include $(DEPS)

.PHONY: clean

clean:
	rm -rf $(ODIR)
	rm -f $(PROJ)
