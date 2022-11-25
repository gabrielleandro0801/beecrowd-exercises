select p.id as id, p.name as name from products p
inner join categories c
on p.id_categories = c.id
and c.name like 'super%';
