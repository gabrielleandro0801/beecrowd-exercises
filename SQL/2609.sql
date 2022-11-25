select c.name as name, sum(p.amount) as sum from categories c
inner join products p
on c.id = p.id_categories
group by c.name;
